#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserFacebookInstantGamesIdInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserFacebookInstantGamesIdInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo::*)()>(&::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserFacebookInstantGamesIdInfo::__cordl_internal_get_FacebookInstantGamesId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserFacebookInstantGamesIdInfo::__cordl_internal_get_FacebookInstantGamesId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookInstantGamesId;
}
constexpr void PlayFab::ClientModels::UserFacebookInstantGamesIdInfo::__cordl_internal_set_FacebookInstantGamesId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookInstantGamesId = value;
}
inline void PlayFab::ClientModels::UserFacebookInstantGamesIdInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo* PlayFab::ClientModels::UserFacebookInstantGamesIdInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserFacebookInstantGamesIdInfo::UserFacebookInstantGamesIdInfo()   {
}
