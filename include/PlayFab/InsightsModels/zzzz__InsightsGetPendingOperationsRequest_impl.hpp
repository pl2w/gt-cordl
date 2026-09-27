#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsGetPendingOperationsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetPendingOperationsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest::*)()>(&::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::InsightsModels::InsightsGetPendingOperationsRequest::__cordl_internal_get_OperationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationType;
}
constexpr ::StringW const& PlayFab::InsightsModels::InsightsGetPendingOperationsRequest::__cordl_internal_get_OperationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OperationType;
}
constexpr void PlayFab::InsightsModels::InsightsGetPendingOperationsRequest::__cordl_internal_set_OperationType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OperationType = value;
}
inline void PlayFab::InsightsModels::InsightsGetPendingOperationsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest* PlayFab::InsightsModels::InsightsGetPendingOperationsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest()   {
}
