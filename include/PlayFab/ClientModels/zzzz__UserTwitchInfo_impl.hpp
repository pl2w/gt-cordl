#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserTwitchInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserTwitchInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserTwitchInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserTwitchInfo::*)()>(&::PlayFab::ClientModels::UserTwitchInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserTwitchInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserTwitchInfo::__cordl_internal_get_TwitchId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwitchId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserTwitchInfo::__cordl_internal_get_TwitchId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwitchId;
}
constexpr void PlayFab::ClientModels::UserTwitchInfo::__cordl_internal_set_TwitchId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwitchId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserTwitchInfo::__cordl_internal_get_TwitchUserName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwitchUserName;
}
constexpr ::StringW const& PlayFab::ClientModels::UserTwitchInfo::__cordl_internal_get_TwitchUserName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TwitchUserName;
}
constexpr void PlayFab::ClientModels::UserTwitchInfo::__cordl_internal_set_TwitchUserName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TwitchUserName = value;
}
inline void PlayFab::ClientModels::UserTwitchInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserTwitchInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserTwitchInfo* PlayFab::ClientModels::UserTwitchInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserTwitchInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserTwitchInfo::UserTwitchInfo()   {
}
