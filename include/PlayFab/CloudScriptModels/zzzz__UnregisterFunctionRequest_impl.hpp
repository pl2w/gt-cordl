#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/UnregisterFunctionRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__UnregisterFunctionRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::UnregisterFunctionRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::UnregisterFunctionRequest::*)()>(&::PlayFab::CloudScriptModels::UnregisterFunctionRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84301c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::UnregisterFunctionRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::UnregisterFunctionRequest::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::UnregisterFunctionRequest::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void PlayFab::CloudScriptModels::UnregisterFunctionRequest::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
inline void PlayFab::CloudScriptModels::UnregisterFunctionRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::UnregisterFunctionRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::UnregisterFunctionRequest* PlayFab::CloudScriptModels::UnregisterFunctionRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::UnregisterFunctionRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::UnregisterFunctionRequest::UnregisterFunctionRequest()   {
}
