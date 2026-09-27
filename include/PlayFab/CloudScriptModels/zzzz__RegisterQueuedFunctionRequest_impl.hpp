#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/RegisterQueuedFunctionRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__RegisterQueuedFunctionRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::*)()>(&::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_get_ConnectionString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionString;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_get_ConnectionString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionString;
}
constexpr void PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_set_ConnectionString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionString = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
inline void PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest* PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest::RegisterQueuedFunctionRequest()   {
}
