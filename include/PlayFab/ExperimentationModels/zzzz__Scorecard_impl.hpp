#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/Scorecard.hpp"
#include "PlayFab/ExperimentationModels/zzzz__AnalysisTaskState_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__Scorecard_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__ScorecardDataRow_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::Scorecard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::Scorecard::*)()>(&::PlayFab::ExperimentationModels::Scorecard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::Scorecard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_DateGenerated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DateGenerated;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_DateGenerated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DateGenerated;
}
constexpr void PlayFab::ExperimentationModels::Scorecard::__cordl_internal_set_DateGenerated(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DateGenerated = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_Duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Duration;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_Duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Duration;
}
constexpr void PlayFab::ExperimentationModels::Scorecard::__cordl_internal_set_Duration(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Duration = value;
}
constexpr double_t& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_EventsProcessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventsProcessed;
}
constexpr double_t const& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_EventsProcessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventsProcessed;
}
constexpr void PlayFab::ExperimentationModels::Scorecard::__cordl_internal_set_EventsProcessed(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventsProcessed = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_ExperimentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentId;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_ExperimentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentId;
}
constexpr void PlayFab::ExperimentationModels::Scorecard::__cordl_internal_set_ExperimentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExperimentId = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_ExperimentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentName;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_ExperimentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExperimentName;
}
constexpr void PlayFab::ExperimentationModels::Scorecard::__cordl_internal_set_ExperimentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExperimentName = value;
}
constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState>& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_LatestJobStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LatestJobStatus;
}
constexpr ::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState> const& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_LatestJobStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LatestJobStatus;
}
constexpr void PlayFab::ExperimentationModels::Scorecard::__cordl_internal_set_LatestJobStatus(::System::Nullable_1<::PlayFab::ExperimentationModels::AnalysisTaskState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LatestJobStatus = value;
}
constexpr bool& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_SampleRatioMismatch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleRatioMismatch;
}
constexpr bool const& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_SampleRatioMismatch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleRatioMismatch;
}
constexpr void PlayFab::ExperimentationModels::Scorecard::__cordl_internal_set_SampleRatioMismatch(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SampleRatioMismatch = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>*& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_ScorecardDataRows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScorecardDataRows;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>* const& PlayFab::ExperimentationModels::Scorecard::__cordl_internal_get_ScorecardDataRows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScorecardDataRows;
}
constexpr void PlayFab::ExperimentationModels::Scorecard::__cordl_internal_set_ScorecardDataRows(::System::Collections::Generic::List_1<::PlayFab::ExperimentationModels::ScorecardDataRow*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScorecardDataRows = value;
}
inline void PlayFab::ExperimentationModels::Scorecard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::Scorecard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::Scorecard* PlayFab::ExperimentationModels::Scorecard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::Scorecard*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::Scorecard::Scorecard()   {
}
