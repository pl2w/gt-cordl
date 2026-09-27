#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/EmptyResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__EmptyResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::EmptyResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::EmptyResponse::*)()>(&::PlayFab::ExperimentationModels::EmptyResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::EmptyResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ExperimentationModels::EmptyResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::EmptyResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::EmptyResponse* PlayFab::ExperimentationModels::EmptyResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::EmptyResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::EmptyResponse::EmptyResponse()   {
}
