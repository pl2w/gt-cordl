#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetBuildAliasRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetBuildAliasRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetBuildAliasRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetBuildAliasRequest::*)()>(&::PlayFab::MultiplayerModels::GetBuildAliasRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetBuildAliasRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetBuildAliasRequest::__cordl_internal_get_AliasId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AliasId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetBuildAliasRequest::__cordl_internal_get_AliasId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AliasId;
}
constexpr void PlayFab::MultiplayerModels::GetBuildAliasRequest::__cordl_internal_set_AliasId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AliasId = value;
}
inline void PlayFab::MultiplayerModels::GetBuildAliasRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetBuildAliasRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetBuildAliasRequest* PlayFab::MultiplayerModels::GetBuildAliasRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetBuildAliasRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetBuildAliasRequest::GetBuildAliasRequest()   {
}
