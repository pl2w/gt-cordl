#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkAndroidDeviceIDResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkAndroidDeviceIDResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkAndroidDeviceIDResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkAndroidDeviceIDResult::*)()>(&::PlayFab::ClientModels::LinkAndroidDeviceIDResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkAndroidDeviceIDResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::LinkAndroidDeviceIDResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkAndroidDeviceIDResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkAndroidDeviceIDResult* PlayFab::ClientModels::LinkAndroidDeviceIDResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkAndroidDeviceIDResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkAndroidDeviceIDResult::LinkAndroidDeviceIDResult()   {
}
