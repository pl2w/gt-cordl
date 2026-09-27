#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/IPubSubSubscriber.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__IPubSubSubscriber_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubTopicSubscriptionDelegate_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::IPubSubSubscriber.add_OnTopicSubscriptionStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::PubSub::IPubSubSubscriber::*)(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*)>(&::Meta::Voice::Net::PubSub::IPubSubSubscriber::add_OnTopicSubscriptionStateChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(),
                    {::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::IPubSubSubscriber.remove_OnTopicSubscriptionStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::PubSub::IPubSubSubscriber::*)(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*)>(&::Meta::Voice::Net::PubSub::IPubSubSubscriber::remove_OnTopicSubscriptionStateChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(),
                    {::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::IPubSubSubscriber.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::PubSub::IPubSubSubscriber::*)(::StringW)>(&::Meta::Voice::Net::PubSub::IPubSubSubscriber::Subscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(),
                    {::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::IPubSubSubscriber.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::PubSub::IPubSubSubscriber::*)(::StringW)>(&::Meta::Voice::Net::PubSub::IPubSubSubscriber::Unsubscribe)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(),
                    {::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Net::PubSub::IPubSubSubscriber::add_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::PubSub::IPubSubSubscriber::remove_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::PubSub::IPubSubSubscriber::Subscribe(::StringW  topicId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId);
}
inline void Meta::Voice::Net::PubSub::IPubSubSubscriber::Unsubscribe(::StringW  topicId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId);
}
