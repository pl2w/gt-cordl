#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/TreatmentAssignment.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__TreatmentAssignment_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__Variable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::TreatmentAssignment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::TreatmentAssignment::*)()>(&::PlayFab::ExperimentationModels::TreatmentAssignment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::TreatmentAssignment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*& PlayFab::ExperimentationModels::TreatmentAssignment::__cordl_internal_get_Variables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variables;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>* const& PlayFab::ExperimentationModels::TreatmentAssignment::__cordl_internal_get_Variables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variables;
}
constexpr void PlayFab::ExperimentationModels::TreatmentAssignment::__cordl_internal_set_Variables(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Variables = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ExperimentationModels::TreatmentAssignment::__cordl_internal_get_Variants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variants;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ExperimentationModels::TreatmentAssignment::__cordl_internal_get_Variants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variants;
}
constexpr void PlayFab::ExperimentationModels::TreatmentAssignment::__cordl_internal_set_Variants(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Variants = value;
}
inline void PlayFab::ExperimentationModels::TreatmentAssignment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::TreatmentAssignment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::TreatmentAssignment* PlayFab::ExperimentationModels::TreatmentAssignment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::TreatmentAssignment*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::TreatmentAssignment::TreatmentAssignment()   {
}
