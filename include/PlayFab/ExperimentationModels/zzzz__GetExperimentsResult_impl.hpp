#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetExperimentsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetExperimentsResult_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__Experiment_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::GetExperimentsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::GetExperimentsResult::*)()>(&::PlayFab::ExperimentationModels::GetExperimentsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetExperimentsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Experiment*>*& PlayFab::ExperimentationModels::GetExperimentsResult::__cordl_internal_get_Experiments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Experiments;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Experiment*>* const& PlayFab::ExperimentationModels::GetExperimentsResult::__cordl_internal_get_Experiments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Experiments;
}
constexpr void PlayFab::ExperimentationModels::GetExperimentsResult::__cordl_internal_set_Experiments(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Experiment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Experiments = value;
}
inline void PlayFab::ExperimentationModels::GetExperimentsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetExperimentsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::GetExperimentsResult* PlayFab::ExperimentationModels::GetExperimentsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::GetExperimentsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::GetExperimentsResult::GetExperimentsResult()   {
}
