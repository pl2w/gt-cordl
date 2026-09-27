#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkCustomIDResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkCustomIDResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkCustomIDResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkCustomIDResult::*)()>(&::PlayFab::ClientModels::LinkCustomIDResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkCustomIDResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::LinkCustomIDResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkCustomIDResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkCustomIDResult* PlayFab::ClientModels::LinkCustomIDResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkCustomIDResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkCustomIDResult::LinkCustomIDResult()   {
}
