#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/Requests/WitWebSocketMessageRequest.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketJsonRequest_impl.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketMessageRequest_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseClass_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.get_Endpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::get_Endpoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e34e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"get_Endpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.get_EndWithFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::get_EndWithFullTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e34e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"get_EndWithFullTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.add_OnDecodedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::add_OnDecodedResponse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e34e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"add_OnDecodedResponse", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.remove_OnDecodedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::remove_OnDecodedResponse)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e34f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"remove_OnDecodedResponse", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)(::Meta::WitAi::Json::WitResponseNode*, ::StringW, ::StringW, ::StringW, bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e34fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::StringW, ::StringW, ::StringW, bool)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e35090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)()>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::ToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e3564c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.GetPostData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseClass* (*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::GetPostData)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x9e35104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"GetPostData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.HandleDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::HandleDownload)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e356a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.IsEndOfStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::IsEndOfStream)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e3575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest.SetResponseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::SetResponseData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9e3582c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), 34}
                ));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_get__Endpoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Endpoint_k__BackingField;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_get__Endpoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Endpoint_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_set__Endpoint_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Endpoint_k__BackingField = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_get__EndWithFullTranscription_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndWithFullTranscription_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_get__EndWithFullTranscription_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndWithFullTranscription_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_set__EndWithFullTranscription_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndWithFullTranscription_k__BackingField = value;
}
constexpr ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*& Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_get_OnDecodedResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDecodedResponse;
}
constexpr ::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>* const& Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_get_OnDecodedResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDecodedResponse;
}
constexpr void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::__cordl_internal_set_OnDecodedResponse(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDecodedResponse = value;
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::get_Endpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"get_Endpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::get_EndWithFullTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"get_EndWithFullTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::add_OnDecodedResponse(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"add_OnDecodedResponse", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::remove_OnDecodedResponse(::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"remove_OnDecodedResponse", {}, {::i2c::type_of<::System::Action_1<::Meta::WitAi::Json::WitResponseNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::_ctor(::Meta::WitAi::Json::WitResponseNode*  externalPostData, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, externalPostData, requestId, clientUserId, operationId, endWithFullTranscription);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endpoint, parameters, requestId, clientUserId, operationId, endWithFullTranscription);
}
inline ::StringW Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::Json::WitResponseClass* Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::GetPostData(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(),
                        {"GetPostData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseClass*>(nullptr, ___internal_method, endpoint, parameters);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::HandleDownload(::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString, jsonData, binaryData);
}
inline bool Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::IsEndOfStream(::Meta::WitAi::Json::WitResponseNode*  responseData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, responseData);
}
inline void Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::SetResponseData(::Meta::WitAi::Json::WitResponseNode*  newResponseData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newResponseData);
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::New_ctor(::Meta::WitAi::Json::WitResponseNode*  externalPostData, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(externalPostData, requestId, clientUserId, operationId, endWithFullTranscription));
}
inline ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest* Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::New_ctor(::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameters, ::StringW  requestId, ::StringW  clientUserId, ::StringW  operationId, bool  endWithFullTranscription)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest*>(endpoint, parameters, requestId, clientUserId, operationId, endWithFullTranscription));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketMessageRequest::WitWebSocketMessageRequest()   {
}
