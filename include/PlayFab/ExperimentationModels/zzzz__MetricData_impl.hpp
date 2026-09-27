#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/MetricData.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ExperimentationModels/zzzz__MetricData_def.hpp"
//  Writing Method size for method: ::PlayFab::ExperimentationModels::MetricData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ExperimentationModels::MetricData::*)()>(&::PlayFab::ExperimentationModels::MetricData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::MetricData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_ConfidenceIntervalEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfidenceIntervalEnd;
}
constexpr double_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_ConfidenceIntervalEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfidenceIntervalEnd;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_ConfidenceIntervalEnd(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConfidenceIntervalEnd = value;
}
constexpr double_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_ConfidenceIntervalStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfidenceIntervalStart;
}
constexpr double_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_ConfidenceIntervalStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfidenceIntervalStart;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_ConfidenceIntervalStart(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConfidenceIntervalStart = value;
}
constexpr float_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_DeltaAbsoluteChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeltaAbsoluteChange;
}
constexpr float_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_DeltaAbsoluteChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeltaAbsoluteChange;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_DeltaAbsoluteChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeltaAbsoluteChange = value;
}
constexpr float_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_DeltaRelativeChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeltaRelativeChange;
}
constexpr float_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_DeltaRelativeChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeltaRelativeChange;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_DeltaRelativeChange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeltaRelativeChange = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_InternalName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InternalName;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_InternalName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InternalName;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_InternalName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InternalName = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_Movement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Movement;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_Movement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Movement;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_Movement(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Movement = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr float_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_PMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PMove;
}
constexpr float_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_PMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PMove;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_PMove(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PMove = value;
}
constexpr float_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_PValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PValue;
}
constexpr float_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_PValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PValue;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_PValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PValue = value;
}
constexpr float_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_PValueThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PValueThreshold;
}
constexpr float_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_PValueThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PValueThreshold;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_PValueThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PValueThreshold = value;
}
constexpr ::StringW& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_StatSigLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatSigLevel;
}
constexpr ::StringW const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_StatSigLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatSigLevel;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_StatSigLevel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatSigLevel = value;
}
constexpr float_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_StdDev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StdDev;
}
constexpr float_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_StdDev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StdDev;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_StdDev(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StdDev = value;
}
constexpr float_t& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr float_t const& PlayFab::ExperimentationModels::MetricData::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void PlayFab::ExperimentationModels::MetricData::__cordl_internal_set_Value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
inline void PlayFab::ExperimentationModels::MetricData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ExperimentationModels::MetricData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ExperimentationModels::MetricData* PlayFab::ExperimentationModels::MetricData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ExperimentationModels::MetricData*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::MetricData::MetricData()   {
}
