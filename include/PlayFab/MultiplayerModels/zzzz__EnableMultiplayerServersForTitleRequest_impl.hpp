#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/EnableMultiplayerServersForTitleRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__EnableMultiplayerServersForTitleRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest::*)()>(&::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest* PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest()   {
}
