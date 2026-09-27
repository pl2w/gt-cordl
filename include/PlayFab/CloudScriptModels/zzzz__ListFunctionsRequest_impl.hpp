#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ListFunctionsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ListFunctionsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::ListFunctionsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::ListFunctionsRequest::*)()>(&::PlayFab::CloudScriptModels::ListFunctionsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::CloudScriptModels::ListFunctionsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::ListFunctionsRequest* PlayFab::CloudScriptModels::ListFunctionsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::ListFunctionsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::ListFunctionsRequest::ListFunctionsRequest()   {
}
