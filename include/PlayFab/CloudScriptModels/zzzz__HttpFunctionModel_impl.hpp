#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/HttpFunctionModel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__HttpFunctionModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::HttpFunctionModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::HttpFunctionModel::*)()>(&::PlayFab::CloudScriptModels::HttpFunctionModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::HttpFunctionModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::HttpFunctionModel::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::HttpFunctionModel::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void PlayFab::CloudScriptModels::HttpFunctionModel::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::HttpFunctionModel::__cordl_internal_get_FunctionUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionUrl;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::HttpFunctionModel::__cordl_internal_get_FunctionUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionUrl;
}
constexpr void PlayFab::CloudScriptModels::HttpFunctionModel::__cordl_internal_set_FunctionUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionUrl = value;
}
inline void PlayFab::CloudScriptModels::HttpFunctionModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::HttpFunctionModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::HttpFunctionModel* PlayFab::CloudScriptModels::HttpFunctionModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::HttpFunctionModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::HttpFunctionModel::HttpFunctionModel()   {
}
