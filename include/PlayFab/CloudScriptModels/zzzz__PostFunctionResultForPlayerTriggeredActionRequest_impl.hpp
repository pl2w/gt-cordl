#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PostFunctionResultForPlayerTriggeredActionRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PostFunctionResultForPlayerTriggeredActionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PlayStreamEventEnvelopeModel_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PlayerProfileModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::*)()>(&::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::CloudScriptModels::EntityKey*& PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::CloudScriptModels::EntityKey* const& PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_set_Entity(::PlayFab::CloudScriptModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult*& PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_get_FunctionResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResult;
}
constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult* const& PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_get_FunctionResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResult;
}
constexpr void PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_set_FunctionResult(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionResult = value;
}
constexpr ::PlayFab::CloudScriptModels::PlayerProfileModel*& PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_get_PlayerProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProfile;
}
constexpr ::PlayFab::CloudScriptModels::PlayerProfileModel* const& PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_get_PlayerProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProfile;
}
constexpr void PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_set_PlayerProfile(::PlayFab::CloudScriptModels::PlayerProfileModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerProfile = value;
}
constexpr ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*& PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_get_PlayStreamEventEnvelope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayStreamEventEnvelope;
}
constexpr ::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel* const& PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_get_PlayStreamEventEnvelope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayStreamEventEnvelope;
}
constexpr void PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::__cordl_internal_set_PlayStreamEventEnvelope(::PlayFab::CloudScriptModels::PlayStreamEventEnvelopeModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayStreamEventEnvelope = value;
}
inline void PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest::PostFunctionResultForPlayerTriggeredActionRequest()   {
}
