#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketAuthRequest.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_impl.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketAuthRequest_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e32710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest.GetAuthNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseNode* (*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::GetAuthNode)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9e33418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*>(),
                        {"GetAuthNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest.SetResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::SetResponseData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9e33960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*>(), 34}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::_ctor(::StringW  clientAccessToken, ::StringW  versionTag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientAccessToken, versionTag, parameters);
}
inline ::Meta::WitAi::Json::WitResponseNode* Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::GetAuthNode(::StringW  clientAccessToken, ::StringW  versionTag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*>(),
                        {"GetAuthNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseNode*>(nullptr, ___internal_method, clientAccessToken, versionTag, parameters);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::SetResponseData(::Meta::WitAi::Json::WitResponseNode*  newResponseData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newResponseData);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::New_ctor(::StringW  clientAccessToken, ::StringW  versionTag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest*>(clientAccessToken, versionTag, parameters));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketAuthRequest::WitWebSocketAuthRequest()   {
}
