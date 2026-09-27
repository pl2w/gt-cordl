#pragma once
// IWYU pragma private; include "Modio/Customizations/ISocketConnection.hpp"
#include "Modio/Customizations/zzzz__ISocketConnection_def.hpp"
#include "Modio/Customizations/zzzz__WssMessages_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Modio::Customizations::ISocketConnection.Connected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Customizations::ISocketConnection::*)()>(&::Modio::Customizations::ISocketConnection::Connected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::ISocketConnection*>(),
                    {::i2c::class_of<::Modio::Customizations::ISocketConnection*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ISocketConnection.SendData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Customizations::ISocketConnection::*)(::Modio::Customizations::WssMessages)>(&::Modio::Customizations::ISocketConnection::SendData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::ISocketConnection*>(),
                    {::i2c::class_of<::Modio::Customizations::ISocketConnection*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ISocketConnection.SetupConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Customizations::ISocketConnection::*)(::StringW, ::System::Action_1<::Modio::Customizations::WssMessages>*, ::System::Action*)>(&::Modio::Customizations::ISocketConnection::SetupConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::ISocketConnection*>(),
                    {::i2c::class_of<::Modio::Customizations::ISocketConnection*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Customizations::ISocketConnection.CloseConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Customizations::ISocketConnection::*)()>(&::Modio::Customizations::ISocketConnection::CloseConnection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Customizations::ISocketConnection*>(),
                    {::i2c::class_of<::Modio::Customizations::ISocketConnection*>(), 3}
                ));
    return ___internal_method;
  }
};
inline bool Modio::Customizations::ISocketConnection::Connected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::ISocketConnection*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::ISocketConnection::SendData(::Modio::Customizations::WssMessages  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::ISocketConnection*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, message);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Customizations::ISocketConnection::SetupConnection(::StringW  url, ::System::Action_1<::Modio::Customizations::WssMessages>*  onReceiveMessage, ::System::Action*  onDisconnect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::ISocketConnection*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, url, onReceiveMessage, onDisconnect);
}
inline ::System::Threading::Tasks::Task* Modio::Customizations::ISocketConnection::CloseConnection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Customizations::ISocketConnection*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
