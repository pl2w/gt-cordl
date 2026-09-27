#pragma once
// IWYU pragma private; include "PlayFab/Internal/CallRequestContainer.hpp"
#include "PlayFab/Internal/zzzz__HttpRequestState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Internal/zzzz__CallRequestContainer_def.hpp"
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::Internal::CallRequestContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Internal::CallRequestContainer::*)()>(&::PlayFab::Internal::CallRequestContainer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa844260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::CallRequestContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::Internal::HttpRequestState& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_HttpState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpState;
}
constexpr ::PlayFab::Internal::HttpRequestState const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_HttpState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpState;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_HttpState(::PlayFab::Internal::HttpRequestState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HttpState = value;
}
constexpr ::System::Net::HttpWebRequest*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_HttpRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpRequest;
}
constexpr ::System::Net::HttpWebRequest* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_HttpRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HttpRequest;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_HttpRequest(::System::Net::HttpWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HttpRequest = value;
}
constexpr ::StringW& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_ApiEndpoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiEndpoint;
}
constexpr ::StringW const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_ApiEndpoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiEndpoint;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_ApiEndpoint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApiEndpoint = value;
}
constexpr ::StringW& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_FullUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullUrl;
}
constexpr ::StringW const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_FullUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullUrl;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_FullUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FullUrl = value;
}
constexpr ::ArrayW<uint8_t>& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_Payload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Payload;
}
constexpr ::ArrayW<uint8_t> const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_Payload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Payload;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_Payload(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Payload = value;
}
constexpr ::StringW& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_JsonResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JsonResponse;
}
constexpr ::StringW const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_JsonResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JsonResponse;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_JsonResponse(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JsonResponse = value;
}
constexpr ::PlayFab::SharedModels::PlayFabRequestCommon*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_ApiRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiRequest;
}
constexpr ::PlayFab::SharedModels::PlayFabRequestCommon* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_ApiRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiRequest;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_ApiRequest(::PlayFab::SharedModels::PlayFabRequestCommon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApiRequest = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_RequestHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestHeaders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_RequestHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RequestHeaders;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_RequestHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RequestHeaders = value;
}
constexpr ::PlayFab::SharedModels::PlayFabResultCommon*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_ApiResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiResult;
}
constexpr ::PlayFab::SharedModels::PlayFabResultCommon* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_ApiResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ApiResult;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_ApiResult(::PlayFab::SharedModels::PlayFabResultCommon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ApiResult = value;
}
constexpr ::PlayFab::PlayFabError*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_Error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr ::PlayFab::PlayFabError* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_Error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Error;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_Error(::PlayFab::PlayFabError*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Error = value;
}
constexpr ::System::Action*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_DeserializeResultJson()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeserializeResultJson;
}
constexpr ::System::Action* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_DeserializeResultJson() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeserializeResultJson;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_DeserializeResultJson(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeserializeResultJson = value;
}
constexpr ::System::Action*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_InvokeSuccessCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvokeSuccessCallback;
}
constexpr ::System::Action* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_InvokeSuccessCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InvokeSuccessCallback;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_InvokeSuccessCallback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InvokeSuccessCallback = value;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_ErrorCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorCallback;
}
constexpr ::System::Action_1<::PlayFab::PlayFabError*>* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_ErrorCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorCallback;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_ErrorCallback(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorCallback = value;
}
constexpr ::System::Object*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_CustomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr ::System::Object* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_CustomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_CustomData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomData = value;
}
constexpr ::PlayFab::PlayFabApiSettings*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::PlayFab::PlayFabApiSettings* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_settings(::PlayFab::PlayFabApiSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_context(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi*& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_instanceApi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceApi;
}
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* const& PlayFab::Internal::CallRequestContainer::__cordl_internal_get_instanceApi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___instanceApi;
}
constexpr void PlayFab::Internal::CallRequestContainer::__cordl_internal_set_instanceApi(::PlayFab::SharedModels::IPlayFabInstanceApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___instanceApi = value;
}
inline void PlayFab::Internal::CallRequestContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::CallRequestContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Internal::CallRequestContainer* PlayFab::Internal::CallRequestContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Internal::CallRequestContainer*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::CallRequestContainer::CallRequestContainer()   {
}
