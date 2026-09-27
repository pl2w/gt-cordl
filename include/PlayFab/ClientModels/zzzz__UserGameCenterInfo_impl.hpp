#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserGameCenterInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserGameCenterInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserGameCenterInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserGameCenterInfo::*)()>(&::PlayFab::ClientModels::UserGameCenterInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserGameCenterInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserGameCenterInfo::__cordl_internal_get_GameCenterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserGameCenterInfo::__cordl_internal_get_GameCenterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameCenterId;
}
constexpr void PlayFab::ClientModels::UserGameCenterInfo::__cordl_internal_set_GameCenterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameCenterId = value;
}
inline void PlayFab::ClientModels::UserGameCenterInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserGameCenterInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserGameCenterInfo* PlayFab::ClientModels::UserGameCenterInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserGameCenterInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserGameCenterInfo::UserGameCenterInfo()   {
}
