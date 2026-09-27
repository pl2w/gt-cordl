#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkFacebookAccountResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkFacebookAccountResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkFacebookAccountResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkFacebookAccountResult::*)()>(&::PlayFab::ClientModels::LinkFacebookAccountResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkFacebookAccountResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::LinkFacebookAccountResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkFacebookAccountResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkFacebookAccountResult* PlayFab::ClientModels::LinkFacebookAccountResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkFacebookAccountResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkFacebookAccountResult::LinkFacebookAccountResult()   {
}
