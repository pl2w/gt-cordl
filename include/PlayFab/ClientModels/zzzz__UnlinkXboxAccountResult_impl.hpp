#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkXboxAccountResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkXboxAccountResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkXboxAccountResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkXboxAccountResult::*)()>(&::PlayFab::ClientModels::UnlinkXboxAccountResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkXboxAccountResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::UnlinkXboxAccountResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkXboxAccountResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkXboxAccountResult* PlayFab::ClientModels::UnlinkXboxAccountResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkXboxAccountResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkXboxAccountResult::UnlinkXboxAccountResult()   {
}
