#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/GetTreatmentAssignmentRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetTreatmentAssignmentRequest_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest::*)()>(&::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ExperimentationModels::EntityKey*& PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::ExperimentationModels::EntityKey* const& PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest::__cordl_internal_set_Entity(::PlayFab::ExperimentationModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
inline void PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest* PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest::GetTreatmentAssignmentRequest()   {
}
