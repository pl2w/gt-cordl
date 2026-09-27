#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/Experiment.hpp"
#include "PlayFab/ExperimentationModels/zzzz__ExperimentState_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__ExperimentType_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__Experiment_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__Variant_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::Experiment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::Experiment::*)()>(&::PlayFab::ExperimentationModels::Experiment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::Experiment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_Description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Description = value;
}
constexpr uint32_t& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Duration;
}
constexpr uint32_t const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Duration;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_Duration(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Duration = value;
}
constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_ExperimentType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentType;
}
constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType> const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_ExperimentType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentType;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_ExperimentType(::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExperimentType = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Id;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_Id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Id = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_SegmentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SegmentId;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_SegmentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SegmentId;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_SegmentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SegmentId = value;
}
constexpr ::System::DateTime& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_StartDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartDate;
}
constexpr ::System::DateTime const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_StartDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StartDate;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_StartDate(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StartDate = value;
}
constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentState>& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentState> const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___State;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_State(::System::Nullable_1<::PlayFab::ExperimentationModels::ExperimentState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___State = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_TitlePlayerAccountTestIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitlePlayerAccountTestIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_TitlePlayerAccountTestIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitlePlayerAccountTestIds;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_TitlePlayerAccountTestIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitlePlayerAccountTestIds = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Variants()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variants;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>* const& PlayFab::ExperimentationModels::Experiment::__cordl_internal_get_Variants() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Variants;
}
constexpr void PlayFab::ExperimentationModels::Experiment::__cordl_internal_set_Variants(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::Variant*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Variants = value;
}
inline void PlayFab::ExperimentationModels::Experiment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::Experiment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::Experiment* PlayFab::ExperimentationModels::Experiment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::Experiment*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::Experiment::Experiment()   {
}
