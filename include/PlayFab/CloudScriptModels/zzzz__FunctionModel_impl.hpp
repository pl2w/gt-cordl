#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/FunctionModel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__FunctionModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::FunctionModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::FunctionModel::*)()>(&::PlayFab::CloudScriptModels::FunctionModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::FunctionModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_get_FunctionAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionAddress;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_get_FunctionAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionAddress;
}
constexpr void PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_set_FunctionAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionAddress = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_get_FunctionName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_get_FunctionName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FunctionName;
}
constexpr void PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_set_FunctionName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FunctionName = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_get_TriggerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerType;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_get_TriggerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerType;
}
constexpr void PlayFab::CloudScriptModels::FunctionModel::__cordl_internal_set_TriggerType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerType = value;
}
inline void PlayFab::CloudScriptModels::FunctionModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::FunctionModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::FunctionModel* PlayFab::CloudScriptModels::FunctionModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::FunctionModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::FunctionModel::FunctionModel()   {
}
