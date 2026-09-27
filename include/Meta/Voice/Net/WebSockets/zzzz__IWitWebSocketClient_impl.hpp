#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/IWitWebSocketClient.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketClient_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__IPubSubSubscriber_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketResponseProcessor_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClient.add_OnProcessForwardedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClient::add_OnProcessForwardedResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClient.remove_OnProcessForwardedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClient::remove_OnProcessForwardedResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClient::Connect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClient::Disconnect)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClient.SendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::IWitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClient::SendRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClient.TrackRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::IWitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClient::TrackRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClient.add_OnTopicRequestTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketClient::*)(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClient::add_OnTopicRequestTracked)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::IWitWebSocketClient.remove_OnTopicRequestTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::IWitWebSocketClient::*)(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::IWitWebSocketClient::remove_OnTopicRequestTracked)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Net::WebSockets::IWitWebSocketClient::add_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketClient::remove_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketClient::Connect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketClient::Disconnect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::Voice::Net::WebSockets::IWitWebSocketClient::SendRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline bool Meta::Voice::Net::WebSockets::IWitWebSocketClient::TrackRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketClient::add_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::IWitWebSocketClient::remove_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
/// @brief Convert operator to "::Meta::Voice::Net::PubSub::IPubSubSubscriber"
constexpr  Meta::Voice::Net::WebSockets::IWitWebSocketClient::operator ::Meta::Voice::Net::PubSub::IPubSubSubscriber*() noexcept {
return static_cast<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Net::PubSub::IPubSubSubscriber"
constexpr ::Meta::Voice::Net::PubSub::IPubSubSubscriber* Meta::Voice::Net::WebSockets::IWitWebSocketClient::i___Meta__Voice__Net__PubSub__IPubSubSubscriber() noexcept {
return static_cast<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(static_cast<void*>(this));
}
