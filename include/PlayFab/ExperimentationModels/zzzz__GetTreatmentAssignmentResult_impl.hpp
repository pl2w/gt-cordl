#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetTreatmentAssignmentResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetTreatmentAssignmentResult_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__TreatmentAssignment_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult::*)()>(&::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ExperimentationModels::TreatmentAssignment*& PlayFab::ExperimentationModels::GetTreatmentAssignmentResult::__cordl_internal_get_TreatmentAssignment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreatmentAssignment;
}
constexpr ::PlayFab::ExperimentationModels::TreatmentAssignment* const& PlayFab::ExperimentationModels::GetTreatmentAssignmentResult::__cordl_internal_get_TreatmentAssignment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TreatmentAssignment;
}
constexpr void PlayFab::ExperimentationModels::GetTreatmentAssignmentResult::__cordl_internal_set_TreatmentAssignment(::PlayFab::ExperimentationModels::TreatmentAssignment*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TreatmentAssignment = value;
}
inline void PlayFab::ExperimentationModels::GetTreatmentAssignmentResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult* PlayFab::ExperimentationModels::GetTreatmentAssignmentResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult::GetTreatmentAssignmentResult()   {
}
