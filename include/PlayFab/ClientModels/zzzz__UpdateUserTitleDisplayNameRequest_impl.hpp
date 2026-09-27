#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdateUserTitleDisplayNameRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UpdateUserTitleDisplayNameRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest::*)()>(&::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
inline void PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest* PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest()   {
}
