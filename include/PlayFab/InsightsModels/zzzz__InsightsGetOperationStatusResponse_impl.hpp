#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetOperationStatusResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetOperationStatusResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsGetOperationStatusResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsGetOperationStatusResponse::*)()>(&::PlayFab::InsightsModels::InsightsGetOperationStatusResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
constexpr ::System::DateTime& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationCompletedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationCompletedTime;
}
constexpr ::System::DateTime const& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationCompletedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationCompletedTime;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_set_OperationCompletedTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationCompletedTime = value;
}
constexpr ::StringW& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationId;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationId;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_set_OperationId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationId = value;
}
constexpr ::System::DateTime& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationLastUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationLastUpdated;
}
constexpr ::System::DateTime const& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationLastUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationLastUpdated;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_set_OperationLastUpdated(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationLastUpdated = value;
}
constexpr ::System::DateTime& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationStartedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationStartedTime;
}
constexpr ::System::DateTime const& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationStartedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationStartedTime;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_set_OperationStartedTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationStartedTime = value;
}
constexpr ::StringW& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationType;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationType;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_set_OperationType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationType = value;
}
constexpr int32_t& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationValue;
}
constexpr int32_t const& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_OperationValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationValue;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_set_OperationValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationValue = value;
}
constexpr ::StringW& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::__cordl_internal_set_Status(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
inline void PlayFab::InsightsModels::InsightsGetOperationStatusResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsGetOperationStatusResponse* PlayFab::InsightsModels::InsightsGetOperationStatusResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsGetOperationStatusResponse::InsightsGetOperationStatusResponse()   {
}
