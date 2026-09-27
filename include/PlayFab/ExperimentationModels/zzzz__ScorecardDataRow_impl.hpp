#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/ScorecardDataRow.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__ScorecardDataRow_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__MetricData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::ScorecardDataRow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::ScorecardDataRow::*)()>(&::PlayFab::ExperimentationModels::ScorecardDataRow::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::ScorecardDataRow*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_get_IsControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsControl;
}
constexpr bool const& PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_get_IsControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsControl;
}
constexpr void PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_set_IsControl(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsControl = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ExperimentationModels::MetricData*>*& PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_get_MetricDataRows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetricDataRows;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ExperimentationModels::MetricData*>* const& PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_get_MetricDataRows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MetricDataRows;
}
constexpr void PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_set_MetricDataRows(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ExperimentationModels::MetricData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MetricDataRows = value;
}
constexpr uint32_t& PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_get_PlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCount;
}
constexpr uint32_t const& PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_get_PlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerCount;
}
constexpr void PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_set_PlayerCount(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerCount = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_get_VariantName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VariantName;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_get_VariantName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VariantName;
}
constexpr void PlayFab::ExperimentationModels::ScorecardDataRow::__cordl_internal_set_VariantName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VariantName = value;
}
inline void PlayFab::ExperimentationModels::ScorecardDataRow::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::ScorecardDataRow*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::ScorecardDataRow* PlayFab::ExperimentationModels::ScorecardDataRow::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::ScorecardDataRow*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::ScorecardDataRow::ScorecardDataRow()   {
}
