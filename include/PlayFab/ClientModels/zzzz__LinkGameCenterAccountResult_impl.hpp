#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkGameCenterAccountResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkGameCenterAccountResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkGameCenterAccountResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkGameCenterAccountResult::*)()>(&::PlayFab::ClientModels::LinkGameCenterAccountResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkGameCenterAccountResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::LinkGameCenterAccountResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkGameCenterAccountResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkGameCenterAccountResult* PlayFab::ClientModels::LinkGameCenterAccountResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkGameCenterAccountResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkGameCenterAccountResult::LinkGameCenterAccountResult()   {
}
