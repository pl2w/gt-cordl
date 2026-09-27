#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketSubscriptionRequest.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_impl.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSubscriptionType_impl.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSubscriptionRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSubscriptionType_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest.get_SubscriptionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::get_SubscriptionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e35c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                        {"get_SubscriptionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::*)(::StringW, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e2fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e35d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest.GetSubscriptionNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (*)(::StringW, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::GetSubscriptionNode)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e35c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                        {"GetSubscriptionNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest.GetSubscriptionNodeKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::GetSubscriptionNodeKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e35dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                        {"GetSubscriptionNodeKey", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType& Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::__cordl_internal_get__SubscriptionType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SubscriptionType_k__BackingField;
}
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::__cordl_internal_get__SubscriptionType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SubscriptionType_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::__cordl_internal_set__SubscriptionType_k__BackingField(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SubscriptionType_k__BackingField = value;
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::get_SubscriptionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                        {"get_SubscriptionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::_ctor(::StringW  topicId, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  subscriptionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId, subscriptionType);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::GetSubscriptionNode(::StringW  topicId, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  subscriptionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                        {"GetSubscriptionNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(nullptr, ___internal_method, topicId, subscriptionType);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::GetSubscriptionNodeKey(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  subscriptionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(),
                        {"GetSubscriptionNodeKey", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, subscriptionType);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::New_ctor(::StringW  topicId, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionType  subscriptionType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>(topicId, subscriptionType));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest::WitWebSocketSubscriptionRequest()   {
}
