#pragma once
// IWYU pragma private; include "Meta/Voice/Net/PubSub/PubSubTopicSubscriptionDelegate.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubTopicSubscriptionDelegate_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSubscriptionState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e6af8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate::*)(::StringW, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState)>(&::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e6b040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>(),
                    {::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate::Invoke(::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  subscriptionState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId, subscriptionState);
}
inline ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate* Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate::PubSubTopicSubscriptionDelegate()   {
}
