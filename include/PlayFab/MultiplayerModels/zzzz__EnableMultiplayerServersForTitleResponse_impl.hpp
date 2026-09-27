#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/EnableMultiplayerServersForTitleResponse.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TitleMultiplayerServerEnabledStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__EnableMultiplayerServersForTitleResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse::*)()>(&::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>& PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus> const& PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse::__cordl_internal_set_Status(::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
inline void PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse* PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse()   {
}
