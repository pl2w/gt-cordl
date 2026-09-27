#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/NativeWebSocketWrapper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__NativeWebSocketWrapper_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketCloseCode_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocket_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWebSocket_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__NativeWebSocketWrapper__Close_d__19_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__NativeWebSocketWrapper__Connect_d__5_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__NativeWebSocketWrapper__Send_d__10_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WebSocketCloseCode_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketConnectionState_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::_ctor)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9e27630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)()>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::Finalize)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9e27834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)()>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::get_State)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9e27a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)()>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::Connect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e27aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.add_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::System::Action*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::add_OnOpen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e27b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"add_OnOpen", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.remove_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::System::Action*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::remove_OnOpen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e27c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"remove_OnOpen", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.RaiseOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)()>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::RaiseOpen)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e27cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"RaiseOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::Send)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e27cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.add_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::add_OnMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e27dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"add_OnMessage", {}, {::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.remove_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::remove_OnMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e27e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"remove_OnMessage", {}, {::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.RaiseMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::RaiseMessage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e27f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"RaiseMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.add_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::System::Action_1<::StringW>*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::add_OnError)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e27f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"add_OnError", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.remove_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::System::Action_1<::StringW>*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::remove_OnError)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e27ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.RaiseError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::RaiseError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e280a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"RaiseError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)()>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::Close)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e280c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.add_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::add_OnClose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e2819c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"add_OnClose", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.remove_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::remove_OnClose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e2824c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"remove_OnClose", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper.RaiseClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::*)(::Meta::Net::NativeWebSocket::WebSocketCloseCode)>(&::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::RaiseClose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e282fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"RaiseClose", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketCloseCode>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Net::NativeWebSocket::WebSocket*& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get__webSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocket;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocket* const& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get__webSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocket;
}
constexpr void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_set__webSocket(::Meta::Net::NativeWebSocket::WebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webSocket = value;
}
constexpr ::System::Action*& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get_OnOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOpen;
}
constexpr ::System::Action* const& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get_OnOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOpen;
}
constexpr void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_set_OnOpen(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOpen = value;
}
constexpr ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get_OnMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMessage;
}
constexpr ::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>* const& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get_OnMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMessage;
}
constexpr void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_set_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMessage = value;
}
constexpr ::System::Action_1<::StringW>*& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get_OnError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr ::System::Action_1<::StringW>* const& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get_OnError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_set_OnError(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnError = value;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get_OnClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClose;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>* const& Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_get_OnClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClose;
}
constexpr void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::__cordl_internal_set_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClose = value;
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::_ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, headers);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::add_OnOpen(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"add_OnOpen", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::remove_OnOpen(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"remove_OnOpen", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::RaiseOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"RaiseOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::Send(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, data);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::add_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"add_OnMessage", {}, {::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::remove_OnMessage(::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"remove_OnMessage", {}, {::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::RaiseMessage(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"RaiseMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, length);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::add_OnError(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"add_OnError", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::remove_OnError(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::RaiseError(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"RaiseError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::add_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"add_OnClose", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::remove_OnClose(::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"remove_OnClose", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::RaiseClose(::Meta::Net::NativeWebSocket::WebSocketCloseCode  closeCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(),
                        {"RaiseClose", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketCloseCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeCode);
}
inline ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper* Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::New_ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper*>(url, headers));
}
/// @brief Convert operator to "::Meta::Voice::Net::WebSockets::IWebSocket"
constexpr  Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::operator ::Meta::Voice::Net::WebSockets::IWebSocket*() noexcept {
return static_cast<::Meta::Voice::Net::WebSockets::IWebSocket*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Net::WebSockets::IWebSocket"
constexpr ::Meta::Voice::Net::WebSockets::IWebSocket* Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::i___Meta__Voice__Net__WebSockets__IWebSocket() noexcept {
return static_cast<::Meta::Voice::Net::WebSockets::IWebSocket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::NativeWebSocketWrapper::NativeWebSocketWrapper()   {
}
