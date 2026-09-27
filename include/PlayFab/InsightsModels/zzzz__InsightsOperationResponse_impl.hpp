#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsOperationResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsOperationResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsOperationResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsOperationResponse::*)()>(&::PlayFab::InsightsModels::InsightsOperationResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsOperationResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
constexpr ::StringW& PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_get_OperationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationId;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_get_OperationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationId;
}
constexpr void PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_set_OperationId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationId = value;
}
constexpr ::StringW& PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_get_OperationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationType;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_get_OperationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationType;
}
constexpr void PlayFab::InsightsModels::InsightsOperationResponse::__cordl_internal_set_OperationType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationType = value;
}
inline void PlayFab::InsightsModels::InsightsOperationResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsOperationResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsOperationResponse* PlayFab::InsightsModels::InsightsOperationResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsOperationResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsOperationResponse::InsightsOperationResponse()   {
}
