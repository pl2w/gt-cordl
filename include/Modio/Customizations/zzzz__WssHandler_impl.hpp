#pragma once
// IWYU pragma private; include "Modio/Customizations/WssHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Customizations/zzzz__WssHandler_def.hpp"
#include "Modio/Customizations/zzzz__ISocketConnection_def.hpp"
#include "Modio/Customizations/zzzz__WssHandler__Disconnected_d__15_def.hpp"
#include "Modio/Customizations/zzzz__WssHandler__DoMessageHandshake_d__7_1_def.hpp"
#include "Modio/Customizations/zzzz__WssHandler__EnsureConnection_d__11_def.hpp"
#include "Modio/Customizations/zzzz__WssHandler__Send_d__12_def.hpp"
#include "Modio/Customizations/zzzz__WssHandler__Shutdown_d__10_def.hpp"
#include "Modio/Customizations/zzzz__WssHandler__WaitForMessage_d__6_def.hpp"
#include "Modio/Customizations/zzzz__WssMessage_def.hpp"
#include "Modio/Customizations/zzzz__WssMessages_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::WssHandler.get_GatewayUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Modio::Customizations::WssHandler::get_GatewayUrl)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa05ba34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"get_GatewayUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.WaitForMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>* (*)(::StringW, bool)>(&::Modio::Customizations::WssHandler::WaitForMessage)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa05b7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"WaitForMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.CancelWaitingFor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Modio::Customizations::WssHandler::CancelWaitingFor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa05ab6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"CancelWaitingFor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.CancelAllAwaitingMessages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Customizations::WssHandler::CancelAllAwaitingMessages)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa05bb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"CancelAllAwaitingMessages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::Modio::Customizations::WssHandler::Shutdown)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa05b8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.EnsureConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::Modio::Customizations::WssHandler::EnsureConnection)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa05bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"EnsureConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::Modio::Customizations::WssMessage)>(&::Modio::Customizations::WssHandler::Send)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa05be2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"Send", {}, {::i2c::type_of<::Modio::Customizations::WssMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Customizations::WssMessages)>(&::Modio::Customizations::WssHandler::Receive)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xa05bf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"Receive", {}, {::i2c::type_of<::Modio::Customizations::WssMessages>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.ProcessErrorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Customizations::WssMessage)>(&::Modio::Customizations::WssHandler::ProcessErrorObject)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0xa05c28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"ProcessErrorObject", {}, {::i2c::type_of<::Modio::Customizations::WssMessage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::WssHandler.Disconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Customizations::WssHandler::Disconnected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa05c7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"Disconnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Customizations::WssHandler::setStaticF_Socket(::Modio::Customizations::ISocketConnection*  value)  {
::cordl_internals::setStaticField<::Modio::Customizations::ISocketConnection*, "Socket", ::Modio::Customizations::WssHandler*>(std::forward<::Modio::Customizations::ISocketConnection*>(value));
}
inline ::Modio::Customizations::ISocketConnection* Modio::Customizations::WssHandler::getStaticF_Socket()  {
return ::cordl_internals::getStaticField<::Modio::Customizations::ISocketConnection*, "Socket", ::Modio::Customizations::WssHandler*>();
}
inline void Modio::Customizations::WssHandler::setStaticF_WaitingForMessages(::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*>*, "WaitingForMessages", ::Modio::Customizations::WssHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*>* Modio::Customizations::WssHandler::getStaticF_WaitingForMessages()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*>*, "WaitingForMessages", ::Modio::Customizations::WssHandler*>();
}
inline void Modio::Customizations::WssHandler::setStaticF_SubscribedMessageListeners(::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::Modio::Customizations::WssMessage>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::Modio::Customizations::WssMessage>*>*, "SubscribedMessageListeners", ::Modio::Customizations::WssHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::Modio::Customizations::WssMessage>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::Modio::Customizations::WssMessage>*>* Modio::Customizations::WssHandler::getStaticF_SubscribedMessageListeners()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::Modio::Customizations::WssMessage>*>*, "SubscribedMessageListeners", ::Modio::Customizations::WssHandler*>();
}
inline void Modio::Customizations::WssHandler::setStaticF_UnhandledMessages(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Customizations::WssMessage>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Customizations::WssMessage>*, "UnhandledMessages", ::Modio::Customizations::WssHandler*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Customizations::WssMessage>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Customizations::WssMessage>* Modio::Customizations::WssHandler::getStaticF_UnhandledMessages()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Customizations::WssMessage>*, "UnhandledMessages", ::Modio::Customizations::WssHandler*>();
}
inline ::StringW Modio::Customizations::WssHandler::get_GatewayUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"get_GatewayUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>* Modio::Customizations::WssHandler::WaitForMessage(::StringW  messageOperation, bool  checkPreviousUnhandledMessages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"WaitForMessage", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>*>(nullptr, ___internal_method, messageOperation, checkPreviousUnhandledMessages);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* Modio::Customizations::WssHandler::DoMessageHandshake(::Modio::Customizations::WssMessage  message)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                    {"DoMessageHandshake", {::i2c::class_of<T>()}, {::i2c::type_of<::Modio::Customizations::WssMessage>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>(nullptr, ___internal_method, message);
}
inline void Modio::Customizations::WssHandler::CancelWaitingFor(::StringW  messageOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"CancelWaitingFor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, messageOperation);
}
inline void Modio::Customizations::WssHandler::CancelAllAwaitingMessages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"CancelAllAwaitingMessages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::Customizations::WssHandler::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::WssHandler::EnsureConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"EnsureConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::WssHandler::Send(::Modio::Customizations::WssMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"Send", {}, {::i2c::type_of<::Modio::Customizations::WssMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, message);
}
inline void Modio::Customizations::WssHandler::Receive(::Modio::Customizations::WssMessages  messages)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"Receive", {}, {::i2c::type_of<::Modio::Customizations::WssMessages>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, messages);
}
inline void Modio::Customizations::WssHandler::ProcessErrorObject(::Modio::Customizations::WssMessage  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"ProcessErrorObject", {}, {::i2c::type_of<::Modio::Customizations::WssMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void Modio::Customizations::WssHandler::Disconnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Customizations::WssHandler*>(),
                        {"Disconnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::Customizations::WssHandler::WssHandler()   {
}
