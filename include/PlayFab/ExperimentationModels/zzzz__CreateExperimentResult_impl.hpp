#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/CreateExperimentResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__CreateExperimentResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::CreateExperimentResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::CreateExperimentResult::*)()>(&::PlayFab::ExperimentationModels::CreateExperimentResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::CreateExperimentResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ExperimentationModels::CreateExperimentResult::__cordl_internal_get_ExperimentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentId;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::CreateExperimentResult::__cordl_internal_get_ExperimentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentId;
}
constexpr void PlayFab::ExperimentationModels::CreateExperimentResult::__cordl_internal_set_ExperimentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExperimentId = value;
}
inline void PlayFab::ExperimentationModels::CreateExperimentResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::CreateExperimentResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::CreateExperimentResult* PlayFab::ExperimentationModels::CreateExperimentResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::CreateExperimentResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::CreateExperimentResult::CreateExperimentResult()   {
}
