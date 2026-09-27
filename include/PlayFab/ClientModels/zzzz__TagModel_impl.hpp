#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TagModel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__TagModel_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::TagModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::TagModel::*)()>(&::PlayFab::ClientModels::TagModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::TagModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::TagModel::__cordl_internal_get_TagValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagValue;
}
constexpr ::StringW const& PlayFab::ClientModels::TagModel::__cordl_internal_get_TagValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TagValue;
}
constexpr void PlayFab::ClientModels::TagModel::__cordl_internal_set_TagValue(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TagValue = value;
}
inline void PlayFab::ClientModels::TagModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::TagModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::TagModel* PlayFab::ClientModels::TagModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::TagModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::TagModel::TagModel()   {
}
