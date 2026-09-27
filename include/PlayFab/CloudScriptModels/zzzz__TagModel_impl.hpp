#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/TagModel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__TagModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::TagModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::TagModel::*)()>(&::PlayFab::CloudScriptModels::TagModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa843014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::TagModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::TagModel::__cordl_internal_get_TagValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagValue;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::TagModel::__cordl_internal_get_TagValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagValue;
}
constexpr void PlayFab::CloudScriptModels::TagModel::__cordl_internal_set_TagValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TagValue = value;
}
inline void PlayFab::CloudScriptModels::TagModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::TagModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::TagModel* PlayFab::CloudScriptModels::TagModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::TagModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::TagModel::TagModel()   {
}
