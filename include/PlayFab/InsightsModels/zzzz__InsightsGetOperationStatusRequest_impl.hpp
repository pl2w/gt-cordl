#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetOperationStatusRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetOperationStatusRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsGetOperationStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsGetOperationStatusRequest::*)()>(&::PlayFab::InsightsModels::InsightsGetOperationStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::InsightsModels::InsightsGetOperationStatusRequest::__cordl_internal_get_OperationId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationId;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsGetOperationStatusRequest::__cordl_internal_get_OperationId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationId;
}
constexpr void PlayFab::InsightsModels::InsightsGetOperationStatusRequest::__cordl_internal_set_OperationId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationId = value;
}
inline void PlayFab::InsightsModels::InsightsGetOperationStatusRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsGetOperationStatusRequest* PlayFab::InsightsModels::InsightsGetOperationStatusRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest()   {
}
