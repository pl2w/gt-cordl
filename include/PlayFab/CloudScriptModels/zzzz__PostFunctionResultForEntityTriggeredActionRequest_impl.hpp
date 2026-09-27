#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PostFunctionResultForEntityTriggeredActionRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PostFunctionResultForEntityTriggeredActionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::*)()>(&::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::CloudScriptModels::EntityKey*& PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::CloudScriptModels::EntityKey* const& PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::__cordl_internal_set_Entity(::PlayFab::CloudScriptModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult*& PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::__cordl_internal_get_FunctionResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResult;
}
constexpr ::PlayFab::CloudScriptModels::ExecuteFunctionResult* const& PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::__cordl_internal_get_FunctionResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionResult;
}
constexpr void PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::__cordl_internal_set_FunctionResult(::PlayFab::CloudScriptModels::ExecuteFunctionResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionResult = value;
}
inline void PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest::PostFunctionResultForEntityTriggeredActionRequest()   {
}
