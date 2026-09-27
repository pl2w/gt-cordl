#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetDetailsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetDetailsResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetLimitsResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetOperationStatusResponse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsGetDetailsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsGetDetailsResponse::*)()>(&::PlayFab::InsightsModels::InsightsGetDetailsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_DataUsageMb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataUsageMb;
}
constexpr uint32_t const& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_DataUsageMb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataUsageMb;
}
constexpr void PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_set_DataUsageMb(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataUsageMb = value;
}
constexpr ::StringW& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_ErrorMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorMessage;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_ErrorMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorMessage;
}
constexpr void PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_set_ErrorMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorMessage = value;
}
constexpr ::PlayFab::InsightsModels::InsightsGetLimitsResponse*& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_Limits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Limits;
}
constexpr ::PlayFab::InsightsModels::InsightsGetLimitsResponse* const& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_Limits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Limits;
}
constexpr void PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_set_Limits(::PlayFab::InsightsModels::InsightsGetLimitsResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Limits = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_PendingOperations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingOperations;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>* const& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_PendingOperations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingOperations;
}
constexpr void PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_set_PendingOperations(::System::Collections::Generic::List_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PendingOperations = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_PerformanceLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceLevel;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_PerformanceLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerformanceLevel;
}
constexpr void PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_set_PerformanceLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PerformanceLevel = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_RetentionDays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetentionDays;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_get_RetentionDays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RetentionDays;
}
constexpr void PlayFab::InsightsModels::InsightsGetDetailsResponse::__cordl_internal_set_RetentionDays(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RetentionDays = value;
}
inline void PlayFab::InsightsModels::InsightsGetDetailsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsGetDetailsResponse* PlayFab::InsightsModels::InsightsGetDetailsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsGetDetailsResponse::InsightsGetDetailsResponse()   {
}
