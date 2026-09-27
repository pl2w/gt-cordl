#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetLatestScorecardResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetLatestScorecardResult_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__Scorecard_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::GetLatestScorecardResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::GetLatestScorecardResult::*)()>(&::PlayFab::ExperimentationModels::GetLatestScorecardResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ExperimentationModels::Scorecard*& PlayFab::ExperimentationModels::GetLatestScorecardResult::__cordl_internal_get_Scorecard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scorecard;
}
constexpr ::PlayFab::ExperimentationModels::Scorecard* const& PlayFab::ExperimentationModels::GetLatestScorecardResult::__cordl_internal_get_Scorecard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scorecard;
}
constexpr void PlayFab::ExperimentationModels::GetLatestScorecardResult::__cordl_internal_set_Scorecard(::PlayFab::ExperimentationModels::Scorecard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scorecard = value;
}
inline void PlayFab::ExperimentationModels::GetLatestScorecardResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::GetLatestScorecardResult* PlayFab::ExperimentationModels::GetLatestScorecardResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::GetLatestScorecardResult::GetLatestScorecardResult()   {
}
