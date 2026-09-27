#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetExperimentsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetExperimentsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::GetExperimentsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::GetExperimentsRequest::*)()>(&::PlayFab::ExperimentationModels::GetExperimentsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetExperimentsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ExperimentationModels::GetExperimentsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetExperimentsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::GetExperimentsRequest* PlayFab::ExperimentationModels::GetExperimentsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::GetExperimentsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::GetExperimentsRequest::GetExperimentsRequest()   {
}
