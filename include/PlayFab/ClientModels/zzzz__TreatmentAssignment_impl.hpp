#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TreatmentAssignment.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__TreatmentAssignment_def.hpp"
#include "PlayFab/ClientModels/zzzz__Variable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::TreatmentAssignment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::TreatmentAssignment::*)()>(&::PlayFab::ClientModels::TreatmentAssignment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::TreatmentAssignment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>*& PlayFab::ClientModels::TreatmentAssignment::__cordl_internal_get_Variables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variables;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>* const& PlayFab::ClientModels::TreatmentAssignment::__cordl_internal_get_Variables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variables;
}
constexpr void PlayFab::ClientModels::TreatmentAssignment::__cordl_internal_set_Variables(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Variable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Variables = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::TreatmentAssignment::__cordl_internal_get_Variants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variants;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::TreatmentAssignment::__cordl_internal_get_Variants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variants;
}
constexpr void PlayFab::ClientModels::TreatmentAssignment::__cordl_internal_set_Variants(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Variants = value;
}
inline void PlayFab::ClientModels::TreatmentAssignment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::TreatmentAssignment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::TreatmentAssignment* PlayFab::ClientModels::TreatmentAssignment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::TreatmentAssignment*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::TreatmentAssignment::TreatmentAssignment()   {
}
