#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkNintendoSwitchDeviceIdResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkNintendoSwitchDeviceIdResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult::*)()>(&::PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult* PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkNintendoSwitchDeviceIdResult::LinkNintendoSwitchDeviceIdResult()   {
}
